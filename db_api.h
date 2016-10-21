//	database API interface

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#include "db_error.h"

void initialize();

Status openDatabase(DbHandle hndl[1], char *filePath, uint32_t pathLen, Params *params);
Status openDocStore(DbHandle hndl[1], DbHandle dbHndl[1], char *name, uint32_t nameLen, Params *params);
Status createIndex(DbHandle hndl[1], DbHandle docHndl[1], HandleType type, char *idxName, uint32_t nameLen, void *keySpec, uint16_t specSize, Params *params);
Status cloneHandle(DbHandle hndl[1], DbHandle fromhndl[1]);

Status createCursor(DbHandle hndl[1], DbHandle idxHndl[1], ObjId txnId, Params *params);
Status positionCursor(DbHandle hndl[1], CursorOp op, uint8_t *key, uint32_t keyLen);
Status keyAtCursor(DbHandle cursor[1], uint8_t **key, uint32_t *keyLen);
Status docAtCursor(DbHandle cursor[1], Document **doc);

uint64_t beginTxn(DbHandle dbHndl[1]);
Status rollbackTxn(DbHandle dbHndl[1], ObjId txnId);
Status commitTxn(DbHandle dbHnd[1], ObjId txnId);

Status insertKey(DbHandle index[1], uint8_t *key, uint32_t len);

Status addDocument(DbHandle hndl[1], void *obj, uint32_t objSize, ObjId *objId, ObjId txnId);

uint16_t keyGenerator(uint8_t *key, Document *doc, Object *spec);
Status addIndexKeys(DbHandle dochndl[1]);
