// Copyright 2020 BwdYeti.

#pragma once

class IChecksumable
{
public:
	// Empty virtual destructor for proper cleanup
	virtual ~IChecksumable() {}

	virtual int GetChecksum(int (*checksumFunction)(void*, size_t)) const = 0;
};

