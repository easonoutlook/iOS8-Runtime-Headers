/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress> {
    NSString *_address;
}

@property(readonly) NSString * address;

+ (id)asciiAddressWithString:(id)arg1;

- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)encodedString;
- (id)canonicalFormat;
- (id)initWithAddress:(id)arg1;

@end
