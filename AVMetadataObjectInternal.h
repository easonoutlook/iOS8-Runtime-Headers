/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataObject, NSString, AVCaptureInput;

@interface AVMetadataObjectInternal : NSObject  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _time;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _duration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    NSString *_type;
    AVCaptureInput *_input;
    AVMetadataObject *_originalMetadataObject;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(retain) NSString * type;
@property(retain) AVCaptureInput * input;
@property(retain) AVMetadataObject * originalMetadataObject;


- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)input;
- (id)type;
- (void)setType:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)init;
- (void)setOriginalMetadataObject:(id)arg1;
- (void)setInput:(id)arg1;
- (id)originalMetadataObject;

@end