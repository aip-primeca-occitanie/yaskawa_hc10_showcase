// MotionServer.h
//
/*
* Software License Agreement (BSD License) 
*
* Copyright (c) 2013, Yaskawa America, Inc.
* All rights reserved.
*
* Redistribution and use in binary form, with or without modification,
* is permitted provided that the following conditions are met:
*
*       * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*       * Neither the name of the Yaskawa America, Inc., nor the names 
*       of its contributors may be used to endorse or promote products derived
*       from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*/ 

#ifndef MOTIONSERVER_H
#define MOTIONSERVER_H

#define MOTION_STOP_TIMEOUT			20
#define MOTION_START_TIMEOUT		5000  // in milliseconds
#define MOTION_START_CHECK_PERIOD	50  // in millisecond
#define MOTION_INIT_ROS_JOB			"INIT_ROS"

#define MAX_TRAJECTORY_TIME_LENGTH	14400.0f //seconds (4 hours)

#define MIN_VALID_TOOL_INDEX		0
#define MAX_VALID_TOOL_INDEX		63

#ifndef E_EXRCS_PFL_FUNC_BUSY
#define E_EXRCS_PFL_FUNC_BUSY (-19)
#endif

#ifndef E_EXRCS_UNDER_ENERGY_SAVING
#define E_EXRCS_UNDER_ENERGY_SAVING (-20)
#endif

extern void Ros_MotionServer_StartNewConnection(Controller* controller, int sd);
extern BOOL Ros_MotionServer_HasDataInQueue(Controller* controller);
extern BOOL Ros_MotionServer_ClearQ_All(Controller* controller);

#endif
