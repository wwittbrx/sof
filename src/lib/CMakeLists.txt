# SPDX-License-Identifier: BSD-3-Clause

if(BUILD_LIBRARY)
	add_local_sources(sof lib.c )
	return()
endif()

add_local_sources(sof
	lib.c
	alloc.c
	ll_schedule.c
	notifier.c
	edf_schedule.c
	schedule.c
	agent.c
	interrupt.c
	pm_runtime.c
	clk.c
	dma.c
	dai.c
	panic.c
	wait.c
)

if (CONFIG_TRACE)
	add_local_sources(sof
		dma-trace.c
		trace.c)
endif()
