/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {
    BOOL _animated;
    BOOL _updateModelOnly;
    NSDictionary *_userInfo;
}

@property BOOL animated;
@property BOOL updateModelOnly;
@property(copy) NSDictionary * userInfo;

+ (id)contextWithUserInfo:(id)arg1;
+ (id)context;

- (void)setUpdateModelOnly:(BOOL)arg1;
- (BOOL)updateModelOnly;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)animated;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInfo:(id)arg1;
- (id)description;
- (void)dealloc;

@end
