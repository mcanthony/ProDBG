#pragma once

struct json_t;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct SessionLoadState
{
    json_t* root;
    int arraySize;
    int arrayIter;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct PDLoadState;
struct PDSaveState;

void PluginIO_initLoadJson(PDLoadState* loadFuncs);
void PluginIO_initSaveJson(PDSaveState* saveFuncs);