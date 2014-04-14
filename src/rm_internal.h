//
// File:         rm_internal.h
// Description:  Declarations internal to the record management component
// Authors:      Yifei Huang
//

#ifndef RM_INTERNAL_H
#define RM_INTERNAL_H

#include <cstring>
#include "pf.h"

#define NO_MORE_FREE_PAGES -1

// Define the RM file header



/*
class RM_RecBitmap {
public:
  RM_RecBitmap(char *bitmap, int size);
  ~RM_RecBitmap();

  RC SetBit(char *bitmap, int size, int bitnum);
  RC ResetBit(char *bitmap, int size, int bitnum);
  RC ResetBitmap(char *bitmap, int size);

  RC GetFirstZeroBit(char *bitmap, int size, int &location);

private:
  int CharToBitmapSize(int size);
  char * bitmap;
  int length;
};*/


// Define the RM page header
struct RM_PageHeader {
  PageNum nextFreePage;
  int numRecords;
};

#include "rm.h"

#endif