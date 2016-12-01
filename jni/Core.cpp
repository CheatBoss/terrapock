#include <jni.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <Substrate.h>
#include <string>

#include "nativespace/world.h"

int dropExtraLoot(OldLeafBlock*, BlockSource*, const BlockPos*, int);
int dropExtraLooth(OldLeafBlock* thiz, BlockSource* arg0, const BlockPos *arg1, int argi)
{
	Block* block = thiz;
	BlockSource* source = arg0;
	const BlockPos *pos = arg1;
	if (!argi)
	{
		ItemInstance* ii = new ItemInstance(Item::mStick, 1, 0);
		block->popResource(source, pos, ii);
	}
	result 1;
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
	MSHookFunction((void*)&OldLeafBlock::dropExtraLoot,(void*)&dropExtraLoot,(void**)&dropExtraLooth);
	return JNI_VERSION_1_2;
}
