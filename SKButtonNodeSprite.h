/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SKAction, NSObject<SKButtonNodeSpriteDelegate>;

@interface SKButtonNodeSprite : SKSpriteNode  {
    NSObject<SKButtonNodeSpriteDelegate> *_delegate;
    SKAction *_downAction;
    SKAction *_upAction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _downBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _upBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _upInsideBlock;

    int _touches;
}

@property NSObject<SKButtonNodeSpriteDelegate> * delegate;
@property(retain) SKAction * downAction;
@property(retain) SKAction * upAction;

+ (id)buttonWithFontNamed:(id)arg1;

- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)upAction;
- (id)downAction;
- (void)onTouchDownInside:(id)arg1;
- (void)onTouchUp:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)touchMoved:(unsigned int)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (void)touchEnded:(unsigned int)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (void)touchBegan:(unsigned int)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (void)setUpAction:(id)arg1;
- (void)setDownAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
