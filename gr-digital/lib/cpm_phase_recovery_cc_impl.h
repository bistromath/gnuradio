/* -*- c++ -*- */
/* 
 * Copyright 2014 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_DIGITAL_CPM_PHASE_RECOVERY_CC_IMPL_H
#define INCLUDED_DIGITAL_CPM_PHASE_RECOVERY_CC_IMPL_H

#include <gnuradio/digital/cpm_phase_recovery_cc.h>

namespace gr {
  namespace digital {

    class cpm_phase_recovery_cc_impl : public cpm_phase_recovery_cc
    {
     private:
      int d_p;
      int d_len;
      int d_sps;

     public:
      cpm_phase_recovery_cc_impl(int p, int len, int sps);
      ~cpm_phase_recovery_cc_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace digital
} // namespace gr

#endif /* INCLUDED_DIGITAL_CPM_PHASE_RECOVERY_CC_IMPL_H */
