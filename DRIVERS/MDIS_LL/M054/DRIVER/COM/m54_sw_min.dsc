#************************** MDIS4 device descriptor *************************
#
#        Author: kp
#         $Date: 2001/09/25 16:27:37 $
#     $Revision: 1.1 $
#
#   Description: Metadescriptor for M54 (swapped)
#
#****************************************************************************

M54_SW_1  {
	#------------------------------------------------------------------------
	#	general parameters (don't modify)
	#------------------------------------------------------------------------
    DESC_TYPE        = U_INT32  1           # descriptor type (1=device)
    HW_TYPE          = STRING   M54_SW      # hardware name of device

	#------------------------------------------------------------------------
	#	reference to base board
	#------------------------------------------------------------------------
    BOARD_NAME       = STRING   D201_1      # device name of baseboard
    DEVICE_SLOT      = U_INT32  0           # used slot on baseboard (0..n)

	#------------------------------------------------------------------------
	#	device parameters
	#------------------------------------------------------------------------
}
