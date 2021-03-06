/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaReplaceKnob : TSDKnob  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
}


- (id)knobImage;
- (id)layer;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 onRep:(id)arg2;
- (int)dragType;
- (void)updateHitRegionPathForRep:(id)arg1;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1 andRep:(id)arg2 returningDistance:(float*)arg3;

@end
