/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo, NSString;

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying> {
    NSString *_languageCode;
    GEONameInfo *_name;
    NSString *_requestedLanguageCode;
}

@property(readonly) BOOL hasRequestedLanguageCode;
@property(retain) NSString * requestedLanguageCode;
@property(readonly) BOOL hasLanguageCode;
@property(retain) NSString * languageCode;
@property(readonly) BOOL hasName;
@property(retain) GEONameInfo * name;


- (BOOL)hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestedLanguageCode;
- (BOOL)hasRequestedLanguageCode;
- (void)setRequestedLanguageCode:(id)arg1;
- (BOOL)hasLanguageCode;
- (id)languageCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setLanguageCode:(id)arg1;

@end