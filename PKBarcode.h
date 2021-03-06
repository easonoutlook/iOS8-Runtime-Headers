/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSData, NSDictionary;

@interface PKBarcode : NSObject <NSSecureCoding> {
    NSData *_messageData;
    NSDictionary *_options;
    int _format;
    NSString *_altText;
}

@property(copy) NSData * messageData;
@property(copy) NSDictionary * options;
@property(copy) NSString * altText;
@property int format;
@property(readonly) BOOL isTall;

+ (BOOL)supportsSecureCoding;

- (BOOL)isTall;
- (id)initWithBarcodeDictionary:(id)arg1;
- (void)setAltText:(id)arg1;
- (void)setMessageData:(id)arg1;
- (id)altText;
- (id)messageData;
- (int)format;
- (void)setFormat:(int)arg1;
- (void)setOptions:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)dealloc;
- (id)image;
- (id)_imageFromTextMessage;
- (id)_imageFromBarcodeMessage;

@end
