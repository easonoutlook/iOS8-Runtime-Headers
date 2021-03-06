/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUUtility : NSObject  {
}

+ (id)serialNumber;
+ (id)prettyPrintDate:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(int)arg2;
+ (id)URLIfFileExists:(id)arg1;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)arg1;
+ (id)currentProductCategory;
+ (BOOL)cellularDataIsEnabled;
+ (BOOL)hasCellularRadio;
+ (BOOL)isCellularDataCapable;
+ (BOOL)isWiFiCapable;
+ (void)setIsDaemon:(BOOL)arg1;
+ (BOOL)isPasscodeLocked;
+ (BOOL)isRestoringFromCloud;
+ (id)gregorianCalendar;
+ (int)translateErrorCodeFromError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (id)translateError:(id)arg1;
+ (id)errorWithCode:(int)arg1 originalError:(id)arg2;
+ (BOOL)isPasswordProtected;
+ (int)installationKeybagState;
+ (BOOL)createInstallationKeybag:(id)arg1;
+ (BOOL)isDaemon;
+ (void)assignError:(id*)arg1 withError:(id)arg2 translate:(BOOL)arg3;
+ (void)assignError:(id*)arg1 withCode:(int)arg2;
+ (id)currentReleaseType;
+ (id)currentProductType;
+ (id)currentProductBuild;
+ (id)currentProductVersion;
+ (id)taskQueue;
+ (id)errorWithCode:(int)arg1;


@end
