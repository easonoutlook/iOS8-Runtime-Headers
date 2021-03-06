/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSCoding> {
    long long _settingsID;
    NSURL *_outputURL;
    NSString *_outputFileType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _maxDuration;
    long long _maxFileSize;
    long long _minFreeDiskSpaceLimit;
}

@property long long settingsID;
@property(copy) NSURL * outputURL;
@property(copy) NSString * outputFileType;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property long long maxFileSize;
@property long long minFreeDiskSpaceLimit;


- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (void)setMaxFileSize:(long long)arg1;
- (void)setMaxDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setSettingsID:(long long)arg1;
- (id)outputFileType;
- (id)outputURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (long long)maxFileSize;
- (long long)minFreeDiskSpaceLimit;
- (long long)settingsID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
