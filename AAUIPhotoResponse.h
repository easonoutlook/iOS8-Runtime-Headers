/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSData, NSValue;

@interface AAUIPhotoResponse : AAResponse  {
    NSData *_photoData;
    NSValue *_cropRect;
}

@property(readonly) NSData * photoData;
@property(readonly) NSValue * cropRect;


- (id)photoData;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;
- (id)cropRect;

@end
