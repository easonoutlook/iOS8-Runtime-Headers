/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRProtocol : NSObject  {
    unsigned char _protocolID;
    unsigned char _options;
    double _repeatInterval;
    double _carrierFrequency;
}

@property(readonly) unsigned char protocolID;
@property(readonly) unsigned char options;
@property(readonly) double repeatInterval;
@property(readonly) double carrierFrequency;

+ (id)protocolWithID:(unsigned char)arg1 options:(unsigned char)arg2;

- (double)carrierFrequency;
- (unsigned char)protocolID;
- (id)initWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2;
- (double)repeatInterval;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned char)options;
- (id)description;
- (id)init;

@end