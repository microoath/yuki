#include <node.h>
#include <string.h>
#include "If_DBR.h"
#include "BarcodeFormat.h"
#include "BarcodeStructs.h"
#include "ErrorCode.h"
 
using namespace v8;
 
void DecodeFile(const FunctionCallbackInfo<Value>& args) {
 
}
 
void Init(Handle<Object> exports) {
    NODE_SET_METHOD(exports, "decodeFile", DecodeFile);
}
 
NODE_MODULE(dbr, Init)
