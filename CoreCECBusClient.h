/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBusClient : CoreCECBus  {
}

+ (BOOL)supportsSecureCoding;

- (void)mergePropertiesFromBus:(id)arg1;
- (BOOL)setTvLanguageCode:(id)arg1 error:(id*)arg2;
- (BOOL)setOSDName:(id)arg1 error:(id*)arg2;
- (id)addDeviceWithType:(unsigned int)arg1 error:(id*)arg2;
- (void)activeSourceHasChangedTo:(id)arg1 fromDevice:(id)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
