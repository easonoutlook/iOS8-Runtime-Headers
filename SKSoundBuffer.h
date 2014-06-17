/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSString;

@interface SKSoundBuffer : NSObject  {
    unsigned int _bufferId;
    NSString *_path;
    double _duration;
}

@property(readonly) unsigned int bufferId;
@property(readonly) double duration;

+ (id)bufferWithFileNamed:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)bufferId;
- (id)description;
- (double)duration;
- (void)dealloc;
- (id)init;

@end
