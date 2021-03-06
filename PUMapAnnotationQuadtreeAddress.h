/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotationQuadtreeAddress : NSObject <NSCopying> {
    unsigned int _treeLevel;
    unsigned int _quantizedX;
    unsigned int _quantizedY;
}

@property(readonly) unsigned int treeLevel;
@property(readonly) unsigned int quantizedX;
@property(readonly) unsigned int quantizedY;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)quantizedY;
- (unsigned int)quantizedX;
- (unsigned int)treeLevel;
- (id)initWithTreeLevel:(unsigned int)arg1 quantizedX:(unsigned int)arg2 quantizedY:(unsigned int)arg3;
- (id)description;

@end
