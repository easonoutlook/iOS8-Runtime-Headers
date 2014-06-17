/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLVideoQualityOption : NSObject  {
    NSString *_identifier;
    NSString *_name;
    NSString *_exportPreset;
    long long _size;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property long long size;
@property(retain) NSString * exportPreset;

+ (id)videoQualityOptionForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (void)setSize:(long long)arg1;
- (id)identifier;
- (long long)size;
- (void)setExportPreset:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 exportPreset:(id)arg3 size:(long long)arg4;
- (id)sizeDescription;
- (id)exportPreset;
- (id)name;
- (void)setName:(id)arg1;

@end
