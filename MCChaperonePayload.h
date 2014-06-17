/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;

@interface MCChaperonePayload : MCPayload  {
    NSData *_pairingCertificateData;
    BOOL _nonChaperonePairingAllowed;
}

@property(retain,readonly) NSData * pairingCertificateData;
@property(readonly) BOOL nonChaperonePairingAllowed;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (BOOL)nonChaperonePairingAllowed;
- (id)pairingCertificateData;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end