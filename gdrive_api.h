#ifndef __GOOGLE_DRIVE_API_H__
#define __GOOGLE_DRIVE_API_H__
#include <string.h>
#include "../librest/rest.h"

/* convenience functions */
const char * 	JSON_GET_STRING		(json_object*, char*       );
bool 		JSON_GET_BOOL		(json_object*, char*, bool );

void		gdrive_init		(const char *,json_object* );
json_object * 	gdrive_get_metadata	(const char *              );
FILE * 		gdrive_get 		(char *                    );
json_object * 	gdrive_get_changes	(const char*, int          );
void 		gdrive_upload		(char*,FILE*               );
json_object * 	gdrive_files_list	(char*, int                );
json_object * 	gdrive_files_list_children(char*,int               );
json_object * 	gdrive_files_put	(char*, FILE*              );
char * 		gdrive_refresh_token 	(char*                     );
void		gdrive_cleanup		(		           );

#endif
