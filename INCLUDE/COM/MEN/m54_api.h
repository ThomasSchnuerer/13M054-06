/***********************  I n c l u d e  -  F i l e  ************************
 *  
 *         Name: m54_api.h
 *
 *       Author: kp
 *        $Date: 2015/02/18 16:20:22 $
 *    $Revision: 2.2 $
 * 
 *  Description: M54_API header file
 *
 *     Switches: 
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: m54_api.h,v $
 * Revision 2.2  2015/02/18 16:20:22  MRoth
 * R: not compatible to MDIS5 (no 64bit support)
 * M: ported to MDIS5 according porting guide rev. 0.10
 *
 * Revision 2.1  2001/09/25 16:29:41  kp
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2001 by MEN mikro elektronik GmbH, Nuernberg, Germany 
 ****************************************************************************/

#ifndef _M54_API_H
#define _M54_API_H

#ifdef __cplusplus
	extern "C" {
#endif

/*--------------------------------------+
|   DEFINES                             |
+--------------------------------------*/

/*--------------------------------------+
|   TYPEDEFS                            |
+--------------------------------------*/
/*--------------------------------------+
|   EXTERNALS                           |
+--------------------------------------*/
/*--------------------------------------+
|   GLOBALS                             |
+--------------------------------------*/
/*--------------------------------------+
|   PROTOTYPES                          |
+--------------------------------------*/

int32 __MAPILIB M54_LmReset( MDIS_PATH path );
int32 __MAPILIB M54_LmDefineHome(	MDIS_PATH path );
int32 __MAPILIB M54_LmSetIndexPosition( MDIS_PATH path );
int32 __MAPILIB M54_LmLoadPositionErrorForInt( MDIS_PATH path, u_int16 thres );
int32 __MAPILIB M54_LmLoadPositionErrorForStop( MDIS_PATH path, u_int16 thres );
int32 __MAPILIB M54_LmSetBreakpointAbsolute( MDIS_PATH path, int32 bkpoint );
int32 __MAPILIB M54_LmSetBreakpointRelative( MDIS_PATH path, int32 bkpoint );
int32 __MAPILIB M54_LmMaskInterrupts( MDIS_PATH path, u_int16 mask );
int32 __MAPILIB M54_LmResetInterrupts( MDIS_PATH path, u_int16 mask );
int32 __MAPILIB M54_LmLoadFilterParameters(
	MDIS_PATH path,
	u_int16 control,
	u_int16 kp,
	u_int16 ki,
	u_int16 kd,
	u_int16 il,
	u_int8  si);
int32 __MAPILIB M54_LmUpdateFilter( MDIS_PATH path );
int32 __MAPILIB M54_LmLoadTrajectoryParameters(
	MDIS_PATH path,
	u_int16 control,
	u_int32 acc,
	u_int32 vel,
	int32 pos);
int32 __MAPILIB M54_LmStartMotion( MDIS_PATH path );
int32 __MAPILIB M54_LmReadStatus( MDIS_PATH path, u_int32 *statusP );
int32 __MAPILIB M54_LmReadSignalsRegister( MDIS_PATH path, u_int16 *sigsP);
int32 __MAPILIB M54_LmReadIndexPosition(
	MDIS_PATH path,
	int32 *posP);
int32 __MAPILIB M54_LmReadDesiredPosition(
	MDIS_PATH path,
	int32 *posP);
int32 __MAPILIB M54_LmReadRealPosition(
	MDIS_PATH path,
	int32 *posP);
int32 __MAPILIB M54_LmReadDesiredVelocity(
	MDIS_PATH path,
	int32 *velP);
int32 __MAPILIB M54_LmReadRealVelocity(
	MDIS_PATH path,
	int16 *velP);
int32 __MAPILIB M54_LmReadIntegrationSum( MDIS_PATH path, u_int16 *sumP);

#ifdef __cplusplus
	}
#endif

#endif	/* _M54_API_H */


