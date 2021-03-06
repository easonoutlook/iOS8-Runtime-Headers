/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject  {
    PSUsageBundleApp *_usageBundleApp;
    NSString *_identifier;
    NSString *_name;
}

@property PSUsageBundleApp * usageBundleApp;
@property(retain) NSString * identifier;
@property(retain) NSString * name;

+ (id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3;

- (void)setUsageBundleApp:(id)arg1;
- (id)usageBundleApp;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;

@end
