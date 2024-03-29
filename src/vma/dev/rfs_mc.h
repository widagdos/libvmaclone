/*
 * Copyright (C) Mellanox Technologies Ltd. 2001-2013.  ALL RIGHTS RESERVED.
 *
 * This software product is a proprietary product of Mellanox Technologies Ltd.
 * (the "Company") and all right, title, and interest in and to the software product,
 * including all associated intellectual property rights, are and shall
 * remain exclusively with the Company.
 *
 * This software is made available under either the GPL v2 license or a commercial license.
 * If you wish to obtain a commercial license, please contact Mellanox at support@mellanox.com.
 */


#ifndef RFS_MC_H
#define RFS_MC_H

#include "vma/dev/rfs.h"


/**
 * @class rfs_mc
 *
 * Object to manages the sink list of a MC flow
 * This object is used for maintaining the sink list and dispatching packets
 *
 */


class rfs_mc : public rfs
{
public:
	rfs_mc(flow_tuple *flow_spec_5t, ring *p_ring);

	virtual bool rx_dispatch_packet(mem_buf_desc_t* p_rx_wc_buf_desc, void* pv_fd_ready_array);

protected:
	virtual void prepare_flow_spec();
};


#endif /* RFS_MC_H */
