/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSString;

@interface PTSAddGroupSettingsRowAction : PTSRowAction  {
    Class _settingsClass;
    NSString *_groupKeyPath;
}

@property(retain) Class settingsClass;
@property(copy) NSString * groupKeyPath;

+ (id)actionWithGroupKeyPath:(id)arg1 settingsClass:(Class)arg2;

- (Class)settingsClass;
- (void)setSettingsClass:(Class)arg1;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (id)groupKeyPath;
- (void)setGroupKeyPath:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
