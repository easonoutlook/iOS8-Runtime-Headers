/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSURL, NSString, NSData;

@interface MCWebClipPayload : MCPayload  {
    NSURL *_URL;
    NSString *_label;
    NSData *_iconData;
    BOOL _isRemovable;
    BOOL _precomposed;
    BOOL _fullScreen;
    NSString *_savedIdentifier;
}

@property(retain,readonly) NSURL * URL;
@property(retain,readonly) NSString * label;
@property(retain,readonly) NSData * iconData;
@property(readonly) BOOL isRemovable;
@property(readonly) BOOL precomposed;
@property(readonly) BOOL fullScreen;
@property(retain) NSString * savedIdentifier;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setSavedIdentifier:(id)arg1;
- (BOOL)precomposed;
- (BOOL)isRemovable;
- (id)iconData;
- (id)savedIdentifier;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValuePairs;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (BOOL)fullScreen;
- (id)label;
- (id)title;
- (id)URL;
- (id)description;

@end
