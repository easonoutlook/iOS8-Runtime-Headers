/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}


- (unsigned int)band;
- (unsigned int)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)init;

@end
