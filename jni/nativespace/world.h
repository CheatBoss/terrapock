#pragma once

#include <string>
#include <vector>

#include "Block.h"

class BlockSource;
class BlockPos;

class OldLeafBlock: public Block
{
public:
	virtual void dropExtraLoot(BlockSource*, const BlockPos*, int);
};

class Item
{
public:
	static Item* mStick;
};

class ItemInstance
{
public:
	ItemInstance(Item* const, int, int);
};