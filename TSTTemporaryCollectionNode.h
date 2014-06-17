/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSString;

@interface TSTTemporaryCollectionNode : NSObject  {
    struct TSCEVectorIndexPair { 
        unsigned short column; 
        unsigned short row; 
    } mDimensions;
    NSMutableArray *mChildren;
    NSString *mWhitespaceBeforeFirstChild;
    NSMutableArray *mWhitespaceAfterDelimiters;
    unsigned int mFirstIndex;
    unsigned int mLastIndex;
}

@property struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; } dimensions;
@property(retain) NSMutableArray * children;
@property(retain) NSString * whitespaceBeforeFirstChild;
@property(retain) NSMutableArray * whitespaceAfterDelimiters;
@property unsigned int firstIndex;
@property unsigned int lastIndex;


- (id)children;
- (void)setChildren:(id)arg1;
- (void)setDimensions:(struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })arg1;
- (struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })dimensions;
- (id).cxx_construct;
- (unsigned int)lastIndex;
- (unsigned int)firstIndex;
- (void)dealloc;
- (id)init;
- (id)whitespaceBeforeFirstChild;
- (void)setWhitespaceBeforeFirstChild:(id)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (id)whitespaceAfterDelimiters;
- (void)setLastIndex:(unsigned int)arg1;
- (void)setFirstIndex:(unsigned int)arg1;

@end
