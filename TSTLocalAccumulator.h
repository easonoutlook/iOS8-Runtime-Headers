/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLocalAccumulator : NSObject  {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } _idOfFirstOccurence;
    unsigned int _count;
}

@property struct { unsigned short x1; unsigned char x2; unsigned char x3; } idOfFirstOccurence;
@property unsigned int count;


- (id).cxx_construct;
- (void)setCount:(unsigned int)arg1;
- (id)description;
- (unsigned int)count;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })idOfFirstOccurence;
- (void)setIdOfFirstOccurence:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;

@end
