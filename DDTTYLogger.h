/* Generated by RuntimeBrowser.
   Image: /private/var/mobile/Containers/Bundle/Application/DDE3370B-7D9E-43B6-9A8A-C891DDE1C4A0/OCRuntime.app/OCRuntime
 */

@class NSDateFormatter;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {
    BOOL isaTTY;
    NSDateFormatter *dateFormatter;
    char *app;
    char *pid;
    unsigned long appLen;
    unsigned long pidLen;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void)logMessage:(id)arg1;
- (id)init;
- (id)loggerName;

@end
