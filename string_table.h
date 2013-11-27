#ifndef _STRING_TABLE_H
#define _STRING_TABLE_H

#define SET(a,b)		const char *a = b
#define EXTERN(a)		extern const char *a


EXTERN( HELLO );
EXTERN( WORLD );

#endif // _STRING_TABLE_H
