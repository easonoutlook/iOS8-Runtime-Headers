/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSCoding> {
    NSDate *_stopTime;
    int _stopReasons;
}

@property(retain) NSDate * stopTime;
@property int stopReasons;

+ (id)secondaryStateWithContentsOfFile:(id)arg1;

- (id)stopTime;
- (void)setStopTime:(id)arg1;
- (BOOL)writeToFile:(id)arg1;
- (void)setStopReasons:(int)arg1;
- (BOOL)addStopReasons:(int)arg1 stopTime:(id)arg2;
- (int)stopReasons;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end