/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString;

@interface IMAVMicrophone : NSObject  {
    id _internalDevice;
}

@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * uniqueID;


- (id)uniqueID;
- (id)_AVAudioDevice;
- (id)_initWithAVAudioDevice:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;

@end