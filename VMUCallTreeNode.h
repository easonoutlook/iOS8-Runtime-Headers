/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, VMUCallTreeNode;

@interface VMUCallTreeNode : NSObject  {
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned int _count;
    unsigned long long _numBytes;
    unsigned int _numChildren;
    union { 
        void *theChild; 
        void **theChildren; 
    } _un;
}

+ (id)makeFakeRootForNode:(id)arg1;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
+ (id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2 sampler:(id)arg3 options:(unsigned int)arg4;

- (id)parent;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1;
- (id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(BOOL)arg2;
- (id)filterOutSymbols:(id)arg1;
- (id)invertedNode;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (int)comparePuttingMainThreadFirst:(id)arg1;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6;
- (id)nameWithoutOffset;
- (BOOL)isMallocBlockContentNode;
- (BOOL)symbolNameIsUnknown;
- (id)browserName;
- (id)allChildren;
- (id)pruneMallocSize:(unsigned long long)arg1;
- (id)pruneCount:(unsigned int)arg1;
- (id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 showPseudoNodes:(BOOL)arg2;
- (BOOL)callTreeHasBranches;
- (id)fullOutputWithThreshold:(unsigned int)arg1 showPseudoNodes:(BOOL)arg2;
- (void)countFunctionOccurrencesInTree:(id)arg1;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)pseudoName;
- (void)parseNameIntoSymbol:(id*)arg1 library:(id*)arg2 loadAddress:(unsigned long long*)arg3 offset:(unsigned long long*)arg4 address:(unsigned long long*)arg5 suffix:(id*)arg6;
- (int)compareSizeAndCount:(id)arg1;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(BOOL)arg4;
- (void)getBrowserName:(id)arg1;
- (void)setNumChildren:(unsigned int)arg1;
- (unsigned int)numChildren;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
- (id)largestTopOfStackPath;
- (id)sortedChildrenWithPseudoNode;
- (id)pseudoNodeTopOfStackChild;
- (BOOL)isPseudo;
- (unsigned long long)address;
- (id)childAtIndex:(unsigned int)arg1;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (int)compare:(id)arg1;
- (id)name;
- (unsigned int)count;
- (void)dealloc;
- (unsigned long long)numBytes;

@end
