#pragma once

class BlockSource;
class BlockPos;
class ItemInstance;

class Block
{
public:
	virtual popResource(BlockSource &,BlockPos const&,ItemInstance const&)	
};