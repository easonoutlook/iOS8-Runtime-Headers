/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
 */

@class NSMutableDictionary, NSUserDefaults, NSMutableArray, NSBundle;

@interface DuetConfigurator : NSObject <DuetLoggerProtocol> {
    NSBundle *bundle;
    NSMutableDictionary *dictOfConfigurations;
    NSMutableDictionary *appBlackMap;
    NSMutableArray *appWhiteListArray;
    NSUserDefaults *sbDomain;
    NSUserDefaults *bkbdDDomain;
}

@property(retain,readonly) NSMutableDictionary * appBlackMap;
@property(retain,readonly) NSMutableArray * appWhiteListArray;

+ (id)sharedInstance;

- (void)updateSpringBoardConfiguration:(id)arg1;
- (void)loadConfigurations:(id)arg1;
- (void)loadBundleConfigurations;
- (id)appBlackMap;
- (void)reloadBundleFromDisk;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (id)appWhiteListArray;
- (long long)getStateFor:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
