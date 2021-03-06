/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOResourceManifestConfiguration : NSObject  {
    unsigned int _tileGroupIdentifier;
    NSString *_os;
    NSString *_osVersion;
    NSString *_osBuild;
    NSString *_countryCode;
    NSString *_hardwareIdentifier;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_environment;
}

@property unsigned int tileGroupIdentifier;
@property(copy) NSString * os;
@property(copy) NSString * osVersion;
@property(copy) NSString * osBuild;
@property(copy) NSString * countryCode;
@property(copy) NSString * hardwareIdentifier;
@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * applicationVersion;
@property(copy) NSString * environment;


- (void)setTileGroupIdentifier:(unsigned int)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setOs:(id)arg1;
- (unsigned int)tileGroupIdentifier;
- (id)osBuild;
- (id)os;
- (id)initWithConciseDictionaryRepresentation:(id)arg1;
- (id)hardwareIdentifier;
- (id)osVersion;
- (id)conciseDictionaryRepresentation;
- (id)directorySuffix;
- (BOOL)isDefaultConfiguration;
- (void)setEnvironment:(id)arg1;
- (id)applicationVersion;
- (void)setApplicationVersion:(id)arg1;
- (id)applicationIdentifier;
- (id)environment;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
