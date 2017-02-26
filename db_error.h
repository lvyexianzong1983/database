#pragma once

typedef enum {
	DB_OK = 0,
	DB_START = 1000,
	DB_ERROR_outofmemory,
	DB_ERROR_handleclosed,
	DB_ERROR_createdatabase,
	DB_ERROR_createindex,
	DB_ERROR_badhandle,
	DB_ERROR_badrecid,
	DB_ERROR_notbasever,
	DB_ERROR_recorddeleted,
	DB_ERROR_recordnotvisible,
	DB_ERROR_notcurrentversion,
	DB_ERROR_cursornotpositioned,
	DB_ERROR_invaliddeleterecord,
	DB_ERROR_cursorbasekeyerror,
	DB_ERROR_cursoroverflow,
	DB_ERROR_cursorop,
	DB_ERROR_writeconflict,
	DB_ERROR_duplicatekey,
	DB_ERROR_keynotfound,
	DB_ERROR_badtxnstep,
	DB_ERROR_rollbackidxkey,
	DB_ERROR_arena_already_closed,
	DB_ERROR_arenadropped,
	DB_ERROR_deletekey,
	DB_ERROR_indextype,
	DB_ERROR_indexnode,
	DB_ERROR_unique_key_constraint,
	DB_CURSOR_eof,
	DB_CURSOR_notfound,
	DB_CURSOR_notpositioned,
	DB_ITERATOR_eof,
	DB_ITERATOR_notfound,
	DB_BTREE_needssplit,
	DB_BTREE_error,
	DB_ARTREE_error,
	DB_ITER_eof,
} DbStatus;

