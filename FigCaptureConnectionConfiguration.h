/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCaptureSinkConfiguration, NSString, FigCaptureSourceConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <NSCoding, NSCopying> {
    NSString *_connectionID;
    unsigned long _mediaType;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    BOOL _enabled;
}

@property(copy) NSString * connectionID;
@property unsigned long mediaType;
@property(retain) FigCaptureSourceConfiguration * sourceConfiguration;
@property(retain) FigCaptureSinkConfiguration * sinkConfiguration;
@property BOOL enabled;

+ (void)initialize;

- (void)setSinkConfiguration:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (void)setMediaType:(unsigned long)arg1;
- (void)setConnectionID:(id)arg1;
- (id)connectionID;
- (id)sourceConfiguration;
- (id)sinkConfiguration;
- (unsigned long)mediaType;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
