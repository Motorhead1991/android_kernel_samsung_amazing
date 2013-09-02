#ifndef __MMS100S_ISC_Updater_H__
#define __MMS100S_ISC_Updater_H__
#include "MMS100S_ISC_Updater_Customize.h"

typedef enum {
	MRET_NONE = -1,
	MRET_SUCCESS = 0,
	MRET_FILE_OPEN_ERROR,
	MRET_FILE_CLOSE_ERROR,
	MRET_FILE_FORMAT_ERROR,
	MRET_WRITE_BUFFER_ERROR,
	MRET_I2C_ERROR,
	MRET_MASS_ERASE_ERROR,
	MRET_FIRMWARE_WRITE_ERROR,
	MRET_FIRMWARE_VERIFY_ERROR,
	MRET_UPDATE_MODE_ENTER_ERROR,
	MRET_CHECK_COMPATIBILITY_ERROR,
	MRET_CHECK_VERSION_ERROR,
	MRET_LIMIT
} eMFSRet_t;

typedef int mfs_bool_t;
#define MFS_TRUE		(0 == 0)
#define MFS_FALSE		(0 != 0)

extern eMFSRet_t MFS_ISC_update(void);
eMFSRet_t MFS_ISC_update_CRC_Error(void);

#endif