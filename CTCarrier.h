/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTCarrier : NSObject  {
    NSString *_carrierName;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_isoCountryCode;
    BOOL _allowsVOIP;
}

@property(retain) NSString * carrierName;
@property(retain) NSString * mobileCountryCode;
@property(retain) NSString * mobileNetworkCode;
@property(retain) NSString * isoCountryCode;
@property BOOL allowsVOIP;


- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setAllowsVOIP:(BOOL)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (id)isoCountryCode;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)carrierName;
- (BOOL)allowsVOIP;

@end
