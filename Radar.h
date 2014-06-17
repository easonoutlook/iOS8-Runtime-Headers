/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class <NUCRadarLoggingDelegate>, NSOperationQueue, <RadarAuthDataSource>, NUCURLRequestMultipartGenerator, NSString, RadarAuthToken, NUCURLRequestGenerator, NSURLSession;

@interface Radar : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
    unsigned int _authType;
    NSString *_authToken;
    unsigned int _appEnvironment;
    NSString *_appleConnectUserName;
    NSString *_endpoint;
    NSURLSession *_session;
    RadarAuthToken *_currentRWSAuth;
    <RadarAuthDataSource> *_authDataSource;
    NSString *_radarAPIVersion;
    <NUCRadarLoggingDelegate> *_logDelegate;
    NUCURLRequestGenerator *_radarRequestGenerator;
    NUCURLRequestMultipartGenerator *_radarMultiPartGenerator;
    NSOperationQueue *_delegateQueue;
}

@property unsigned int authType;
@property(copy) NSString * authToken;
@property unsigned int appEnvironment;
@property(copy) NSString * appleConnectUserName;
@property(copy) NSString * endpoint;
@property(copy) NSURLSession * session;
@property(retain) RadarAuthToken * currentRWSAuth;
@property <RadarAuthDataSource> * authDataSource;
@property(copy) NSString * radarAPIVersion;
@property <NUCRadarLoggingDelegate> * logDelegate;
@property(retain) NUCURLRequestGenerator * radarRequestGenerator;
@property(retain) NUCURLRequestMultipartGenerator * radarMultiPartGenerator;
@property(retain) NSOperationQueue * delegateQueue;

+ (id)freeSpaceAvailableForURL:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;

- (void)fetchSharedReportsForLoggedInUserWithCompletionHandler:(id)arg1;
- (void)executeSharedReportsForReportId:(int)arg1 requestedFields:(id)arg2 completionHandler:(id)arg3;
- (id)sharedReportsURL;
- (void)updateScheduledTest:(id)arg1 scheduledTestID:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTestSuiteScheduledTestWithIDs:(id)arg1 completionHandler:(id)arg2;
- (void)findScheduledTestWithRequest:(id)arg1 requestedFields:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)findScheduledTest:(id)arg1 completionHandler:(id)arg2;
- (void)updateScheduledTestCase:(id)arg1 scheduledTestID:(int)arg2 andCaseNumber:(int)arg3 completionHandler:(id)arg4;
- (void)removeScheduledTestCaseWithID:(int)arg1 withCaseNumber:(int)arg2 completionHandler:(id)arg3;
- (void)addTestSuiteScheduledTestCase:(id)arg1 toTestSuiteScheduledTestWithID:(int)arg2 completionHandler:(id)arg3;
- (void)addTestSuiteScheduledTest:(id)arg1 completionHandler:(id)arg2;
- (void)removeTestSuiteCaseWithID:(int)arg1 andCaseNumber:(int)arg2 completionHandler:(id)arg3;
- (void)findTestSuiteWithRequest:(id)arg1 requestedFileds:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)findTestSuite:(id)arg1 completionHandler:(id)arg2;
- (void)fetchTestSuiteWithID:(int)arg1 requestedFileds:(id)arg2 completionHandler:(id)arg3;
- (void)updateTestSuiteCase:(id)arg1 withSuiteID:(int)arg2 andCaseNumber:(int)arg3 completionHandler:(id)arg4;
- (void)updateTestSuite:(id)arg1 withID:(int)arg2 completionHandler:(id)arg3;
- (void)addTestSuiteCase:(id)arg1 completionHandler:(id)arg2;
- (void)createTestSuite:(id)arg1 completionHandler:(id)arg2;
- (void)fetchTestSuiteScheduledTestWithIDs:(id)arg1 requestedFields:(id)arg2 completionHandler:(id)arg3;
- (void)_findScheduledTest:(id)arg1 requestedFields:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)findScheduledTest:(id)arg1 requestedFields:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)addTestSuiteScheduledTest:(id)arg1 requestedFields:(id)arg2 completionHandler:(id)arg3;
- (void)_findTestSuite:(id)arg1 requestedFileds:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)findTestSuite:(id)arg1 requestedFileds:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)findKeywordsWithRequest:(id)arg1 requestedFields:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)fetchKeywordsWithIds:(id)arg1 requestedFields:(id)arg2 completionHandler:(id)arg3;
- (id)_findHandlerBlockWithCompletionHandler:(id)arg1;
- (id)keywordsURL;
- (void)renameScheduledTestCasePictureWithScheduledTestId:(int)arg1 caseId:(int)arg2 fromOldPictureFilePath:(id)arg3 toNewPictureFilePath:(id)arg4 completionHandler:(id)arg5;
- (void)renameScheduledTestCaseAttachmentWithScheduledTestId:(int)arg1 caseId:(int)arg2 fromOldAttachmentFilePath:(id)arg3 toNewAttachmentFilePath:(id)arg4 completionHandler:(id)arg5;
- (void)renameScheduledTestPictureWithScheduledTestId:(int)arg1 fromOldPictureFilePath:(id)arg2 toNewPictureFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)renameScheduledTestAttachmentWithScheduledTestId:(int)arg1 fromOldAttachmentFilePath:(id)arg2 toNewAttachmentFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteScheduledTestCasePictureFromScheduledTestId:(int)arg1 caseId:(int)arg2 withPictureFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteScheduledTestCaseAttachmentFromScheduledTestId:(int)arg1 caseId:(int)arg2 withAttachmentFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteScheduledTestPictureFromScheduledTestId:(int)arg1 withPictureFilePath:(id)arg2 completionHandler:(id)arg3;
- (void)deleteScheduledTestAttachmentFromScheduledTestId:(int)arg1 withAttachmentFilePath:(id)arg2 completionHandler:(id)arg3;
- (id)uploadScheduledTestCasePictureWithFileURL:(id)arg1 toScheduledTestId:(int)arg2 caseId:(int)arg3 overridingExisitingPicture:(BOOL)arg4 pictureFilePath:(id)arg5 completionHandler:(id)arg6 progressHandler:(id)arg7;
- (id)uploadScheduledTestCaseAttachmentWithFileURL:(id)arg1 toScheduledTestId:(int)arg2 caseId:(int)arg3 overridingExisitingFile:(BOOL)arg4 attachmentFilePath:(id)arg5 completionHandler:(id)arg6 progressHandler:(id)arg7;
- (id)uploadScheduledTestPictureWithFileURL:(id)arg1 toScheduledTestId:(int)arg2 overridingExisitingPicture:(BOOL)arg3 pictureFilePath:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)uploadScheduledTestAttachmentWithFileURL:(id)arg1 toScheduledTestId:(int)arg2 overridingExisitingFile:(BOOL)arg3 attachmentFilePath:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)downloadScheduledTestCasePictureAttachment:(id)arg1 forScheduledtestId:(int)arg2 caseId:(int)arg3 toFile:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)downloadScheduledTestCaseAttachment:(id)arg1 forScheduledtestId:(int)arg2 caseId:(int)arg3 toFile:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)downloadScheduledTestPictureAttachment:(id)arg1 forScheduledtestId:(int)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (id)downloadScheduledTestAttachment:(id)arg1 forScheduledtestId:(int)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (void)fetchScheduledTestCasePicturesListWithScheduledTestId:(int)arg1 caseId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchScheduledTestCaseAttachmentListWithScheduledTestId:(int)arg1 caseId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchScheduledTestPicturesListWithScheduledTestId:(int)arg1 completionHandler:(id)arg2;
- (void)fetchScheduledTestAttachmentListWithScheduledTestId:(int)arg1 completionHandler:(id)arg2;
- (void)renameTestSuiteCasePictureWithTestSuiteId:(int)arg1 caseId:(int)arg2 fromOldPictureFilePath:(id)arg3 toNewPictureFilePath:(id)arg4 completionHandler:(id)arg5;
- (void)renameTestSuiteCaseAttachmentWithTestSuiteId:(int)arg1 caseId:(int)arg2 fromOldAttachmentFilePath:(id)arg3 toNewAttachmentFilePath:(id)arg4 completionHandler:(id)arg5;
- (void)renameTestSuitePictureWithTestSuiteId:(int)arg1 fromOldPictureFilePath:(id)arg2 toNewPictureFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)renameTestSuiteAttachmentWithTestSuiteId:(int)arg1 fromOldAttachmentFilePath:(id)arg2 toNewAttachmentFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteTestSuiteCasePictureFromTestSuiteId:(int)arg1 caseId:(int)arg2 withPictureFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteTestSuiteCaseAttachmentFromTestSuiteId:(int)arg1 caseId:(int)arg2 withAttachmentFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteTestSuitePictureFromTestSuiteId:(int)arg1 withPictureFilePath:(id)arg2 completionHandler:(id)arg3;
- (void)deleteTestSuiteAttachmentFromTestSuiteId:(int)arg1 withAttachmentFilePath:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTestSuiteCasePictureWithFileURL:(id)arg1 toTestSuiteId:(int)arg2 caseId:(int)arg3 overridingExisitingPicture:(BOOL)arg4 pictureFilePath:(id)arg5 completionHandler:(id)arg6 progressHandler:(id)arg7;
- (id)uploadTestSuiteCaseAttachmentWithFileURL:(id)arg1 toTestSuiteId:(int)arg2 caseId:(int)arg3 overridingExisitingFile:(BOOL)arg4 attachmentFilePath:(id)arg5 completionHandler:(id)arg6 progressHandler:(id)arg7;
- (id)uploadTestSuitePictureWithFileURL:(id)arg1 toTestSuiteId:(int)arg2 overridingExisitingPicture:(BOOL)arg3 pictureFilePath:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)uploadTestSuiteAttachmentWithFileURL:(id)arg1 toTestSuiteId:(int)arg2 overridingExisitingFile:(BOOL)arg3 attachmentFilePath:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)downloadTestSuiteCasePictureAttachment:(id)arg1 forTestSuiteId:(int)arg2 caseId:(int)arg3 toFile:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)downloadTestSuiteCaseAttachment:(id)arg1 forTestSuiteId:(int)arg2 caseId:(int)arg3 toFile:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)downloadTestSuitePictureAttachment:(id)arg1 forTestSuiteId:(int)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (id)downloadTestSuiteAttachment:(id)arg1 forTestSuiteId:(int)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (void)fetchTestSuiteCasePicturesListWithTestSuiteId:(int)arg1 caseId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTestSuiteCaseAttachmentListWithTestSuiteId:(int)arg1 caseId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTestSuitePicturesListWithTestSuiteId:(int)arg1 completionHandler:(id)arg2;
- (void)fetchTestSuiteAttachmentListWithTestSuiteId:(int)arg1 completionHandler:(id)arg2;
- (void)renameProblemPictureWithProblemId:(int)arg1 fromOldPictureFilePath:(id)arg2 toNewPictureFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)renameProblemAttachmentWithProblemId:(int)arg1 fromOldAttachmentFilePath:(id)arg2 toNewAttachmentFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)deleteProblemPictureFromProblemId:(int)arg1 withPictureFilePath:(id)arg2 completionHandler:(id)arg3;
- (void)deleteProblemAttachmentFromProblemId:(int)arg1 withAttachmentFilePath:(id)arg2 completionHandler:(id)arg3;
- (id)downloadProblemPictureThumbnailData:(id)arg1 forProblemId:(int)arg2 completionHandler:(id)arg3 progressHandler:(id)arg4;
- (id)downloadProblemPictureAttachment:(id)arg1 forProblemId:(int)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (id)downloadProblemPictureData:(id)arg1 forProblemId:(int)arg2 completionHandler:(id)arg3 progressHandler:(id)arg4;
- (id)downloadProblemAttachment:(id)arg1 forProblemId:(int)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (id)downloadProblemAttachmentData:(id)arg1 forProblemId:(int)arg2 completionHandler:(id)arg3 progressHandler:(id)arg4;
- (void)fetchProblemPicturesListWithProblemId:(int)arg1 completionHandler:(id)arg2;
- (void)fetchProblemAttachmentListWithProblemId:(int)arg1 completionHandler:(id)arg2;
- (id)scheduleTestURL;
- (id)testSuiteURL;
- (void)_renameProblemAttachmentWithProblemId:(int)arg1 isPictureType:(BOOL)arg2 oldAttachmentFilePath:(id)arg3 newAttachmentFilePath:(id)arg4 completionHandler:(id)arg5;
- (void)_renameAttachmentWithRequestURL:(id)arg1 newAttachmentFilePath:(id)arg2 completionHandler:(id)arg3;
- (void)_deleteProblemAttachmentListWithProblemId:(int)arg1 isPictureType:(BOOL)arg2 attachmentFilePath:(id)arg3 completionHandler:(id)arg4;
- (void)_deleteAttachmentListWithRequestURL:(id)arg1 completionHandler:(id)arg2;
- (id)_uploadProblemAttachmentWithProblemId:(int)arg1 filePath:(id)arg2 overridingExisitingFile:(BOOL)arg3 attachmentFilePath:(id)arg4 isPictureType:(BOOL)arg5 completionHandler:(id)arg6 progressHandler:(id)arg7;
- (id)_uploadAttachmentWithRequestURL:(id)arg1 filePath:(id)arg2 overridingExisitingFile:(BOOL)arg3 attachmentFilePath:(id)arg4 isPictureType:(BOOL)arg5 completionHandler:(id)arg6 progressHandler:(id)arg7;
- (id)_downloadProblemAttachment:(id)arg1 toFile:(id)arg2 withProblemId:(int)arg3 isPictureType:(BOOL)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)_downloadAttachment:(id)arg1 withRequestURL:(id)arg2 toFile:(id)arg3 completionHandler:(id)arg4 progressHandler:(id)arg5;
- (id)_downloadProblemAttachmentData:(id)arg1 forProblemId:(int)arg2 isPictureType:(BOOL)arg3 isThumbnail:(BOOL)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (void)fetchProblemAttachmentListWithProblemId:(int)arg1 isPictureType:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_fectchAttachmentListWithRequestURL:(id)arg1 completionHandler:(id)arg2;
- (void)removeComponentFromFavoriteWithName:(id)arg1 version:(id)arg2 completionHandler:(id)arg3;
- (void)addComponentToFavoriteWithName:(id)arg1 version:(id)arg2 completionHandler:(id)arg3;
- (void)removePersonFromFavoritesWithDSId:(unsigned long long)arg1 withCompletionHandler:(id)arg2;
- (void)addPersonToFavoritesWithDSId:(unsigned long long)arg1 withCompletionHandler:(id)arg2;
- (void)removeOtherRelatedItemFromFavoritesWithName:(id)arg1 urlScheme:(id)arg2 withCompletionHandler:(id)arg3;
- (void)addOtherRelatedItemToFavoritesWithName:(id)arg1 urlScheme:(id)arg2 withCompletionHandler:(id)arg3;
- (void)removeSharedReportFromFavoritesWithReportId:(int)arg1 withCompletionHandler:(id)arg2;
- (void)addSharedReportToFavoritesWithReportId:(int)arg1 withCompletionHandler:(id)arg2;
- (void)fetchFavoriteOtherRelatedSystemsWithCompletionHandler:(id)arg1;
- (void)fetchFavoriteCompomnentsWithCompletionHandler:(id)arg1;
- (void)fetchFavoritePeopleWithCompletionHandler:(id)arg1;
- (void)fetchFavoriteSharedReportsWithCompletionHandler:(id)arg1;
- (void)fetchFavoriteSharedReportsForReportType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findLabelSetWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)setActiveLabelSet:(id)arg1 completionHandler:(id)arg2;
- (void)fetchActiveLabelSetWithCompletionHandler:(id)arg1;
- (void)removeLabelFromLabelSet:(id)arg1 havingLabelName:(id)arg2 completionHandler:(id)arg3;
- (void)updateLabel:(id)arg1 forLabelSet:(id)arg2 havingLabelName:(id)arg3 completionHandler:(id)arg4;
- (void)addLabel:(id)arg1 toLabelSet:(id)arg2 completionHandler:(id)arg3;
- (void)fetchLabelsInLabelSet:(id)arg1 withCompletionHandler:(id)arg2;
- (void)fetchLabelsWithCompletionHandler:(id)arg1;
- (id)labelSetURL;
- (id)labelURL;
- (void)setRadarMultiPartGenerator:(id)arg1;
- (void)setRadarRequestGenerator:(id)arg1;
- (id)logDelegate;
- (void)setRadarAPIVersion:(id)arg1;
- (void)fetchRelationshipTreeForProblemWithId:(unsigned int)arg1 request:(id)arg2 completionHandler:(id)arg3;
- (void)fetchProtectionMaskForProblemWithId:(unsigned int)arg1 requestedFields:(id)arg2 completionHandler:(id)arg3;
- (void)fetchListOfPrivilegeLevelsWithCompletionHandler:(id)arg1;
- (void)fetchPrivilegeLevelForUserWithDSID:(unsigned long long)arg1 forProblemsWithIDs:(id)arg2 completionHandler:(id)arg3;
- (void)fetchCrashDuplicateChainForProblemWithIds:(id)arg1 completionHandler:(id)arg2;
- (void)fetchCrashRadarListWithState:(unsigned int)arg1 resultRowsLimit:(unsigned int)arg2 completionHandler:(id)arg3;
- (void)fetchProblemsFromProblemWithIds:(id)arg1 withRequestedFields:(id)arg2 completionHandler:(id)arg3;
- (void)cloneProblemWithProblemId:(int)arg1 request:(id)arg2 completionHandler:(id)arg3;
- (void)updateMultipleProblemsWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)updateProblemWithProblemId:(int)arg1 request:(id)arg2 completionHandler:(id)arg3;
- (void)fetchProblemHistoryFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)cloneProblemWithId:(int)arg1 toTargetMilestone:(id)arg2 completionHandler:(id)arg3;
- (void)removeTargetMilestonesOfProblemWithId:(int)arg1 placeholder:(id)arg2 completionHandler:(id)arg3;
- (void)removeTargetMilestonesOfProblemWithId:(int)arg1 problemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)addToTargetMilestonesWithPlaceholder:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)addProblemWithId:(int)arg1 toTargetMilestonesOfProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTargetMilestonesFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)removeFromCCListPersonWithDSId:(unsigned long long)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)addToCCListPersonWithDSId:(unsigned long long)arg1 forProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchCCListFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)removeFromSecurityList:(id)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)addToSecurityList:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchSecurityListItemsFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)findThirdPartyProductsWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)removeThirdPartyProduct:(id)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)addThirdPartyProducts:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchThirdPartyProductsFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)updateOtherRelatedItemWithTitle:(id)arg1 havingSystemName:(id)arg2 havingItemId:(id)arg3 ofProblemId:(int)arg4 completionHandler:(id)arg5;
- (void)removeOtherRelatedItem:(id)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)addOtherRelatedItems:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchOtherRelatedItemsFromProblemIds:(id)arg1 completionHandler:(id)arg2;
- (void)fetchOtherRelatedItemsFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)removeProblemKeywordWithId:(id)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)removeProblemKeywordWithName:(id)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchProblemKeywordsFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (void)updateRelatedProblemWithId:(int)arg1 forProblemWithId:(int)arg2 relationType:(unsigned int)arg3 withNewRelationshipType:(id)arg4 completionHandler:(id)arg5;
- (void)removeRelatedProblemWithId:(int)arg1 fromProblemWithId:(int)arg2 relationType:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)addRelatedProblems:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchRelatedProblemsFromProblemWithId:(int)arg1 andRelationType:(unsigned int)arg2 completionHandler:(id)arg3;
- (void)appendProblemDiagnosis:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTextFormatProblemDiagnosisFromProblemWithId:(int)arg1 andDiagnosisType:(unsigned int)arg2 completionHandler:(id)arg3;
- (void)fetchProblemDiagnosisFromProblemWithId:(int)arg1 andDiagnosisType:(unsigned int)arg2 completionHandler:(id)arg3;
- (void)appendProblemDescription:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTextFormatProblemDescriptionFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (BOOL)fetchProblemDescriptionFromProblemWithId:(int)arg1 completionHandler:(id)arg2;
- (BOOL)signOutWithCompletionHandler:(id)arg1;
- (BOOL)findProblemsWithAdvancedFindRequest:(id)arg1 includingInactiveRadars:(BOOL)arg2 orderedBy:(id)arg3 requestedFields:(id)arg4 resultRowsLimit:(unsigned int)arg5 completionHandler:(id)arg6;
- (BOOL)findProblemsWithRequest:(id)arg1 includingInactiveRadars:(BOOL)arg2 orderedBy:(id)arg3 requestedFields:(id)arg4 resultRowsLimit:(unsigned int)arg5 completionHandler:(id)arg6;
- (BOOL)findProblemsCountsOnlyWithRequest:(id)arg1 includingInactiveRadars:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)findProblemsIdsOnlyWithRequest:(id)arg1 includingInactiveRadars:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)findProblemsWithIds:(id)arg1 orderedBy:(id)arg2 requestedFields:(id)arg3 resultRowsLimit:(unsigned int)arg4 completionHandler:(id)arg5;
- (BOOL)hasRadarAuthTokenExpired;
- (void)setAuthToken:(id)arg1 userName:(id)arg2 withAuthType:(unsigned int)arg3 appEnvironment:(unsigned int)arg4;
- (id)multiPartDispositionForURL:(id)arg1 isPictureBoolStr:(id)arg2;
- (id)radarMultiPartGenerator;
- (id)relationTypeFromRelationTypeCode:(unsigned int)arg1;
- (BOOL)_findProblemsIdsOnlyWithRequest:(id)arg1 idsOnly:(BOOL)arg2 countsOnly:(BOOL)arg3 includingInactiveRadars:(BOOL)arg4 orderedBy:(id)arg5 requestedFields:(id)arg6 resultRowsLimit:(unsigned int)arg7 completionHandler:(id)arg8 countsCompletionHandler:(id)arg9;
- (id)_parseFindProblemsResponseData:(id)arg1 error:(id*)arg2;
- (id)prepareURLRequestForMethod:(id)arg1 atURLString:(id)arg2 withJSONObject:(id)arg3 andAdditionalHeaders:(id)arg4 forError:(id*)arg5;
- (void)setEndpoint:(id)arg1;
- (id)radarEndpointForEnvironment:(unsigned int)arg1;
- (void)setAppEnvironment:(unsigned int)arg1;
- (void)setAppleConnectUserName:(id)arg1;
- (void)setAuthType:(unsigned int)arg1;
- (id)radarAPIVersion;
- (BOOL)setRequestAuthHeader:(id)arg1 forError:(id*)arg2;
- (id)radarRequestGenerator;
- (void)deleteAccessGroup:(id)arg1 fromMilestone:(id)arg2 ofComponent:(id)arg3 completionHandler:(id)arg4;
- (void)addAccessGroup:(id)arg1 toMilestone:(id)arg2 ofComponent:(id)arg3 completionHandler:(id)arg4;
- (void)updateComponentBundleWithId:(int)arg1 withComponentBundle:(id)arg2 completionHandler:(id)arg3;
- (void)updateComponentBundleWithName:(id)arg1 withComponentBundle:(id)arg2 completionHandler:(id)arg3;
- (void)fetchComponentBundleWithId:(int)arg1 completionHandler:(id)arg2;
- (void)fetchComponentBundleWithName:(id)arg1 completionHandler:(id)arg2;
- (void)fetchListOfComponentBundlesWithCompletionHandler:(id)arg1;
- (void)removeComponent:(id)arg1 fromBundleWithId:(int)arg2 completionHandler:(id)arg3;
- (void)removeComponent:(id)arg1 fromBundleWithName:(id)arg2 completionHandler:(id)arg3;
- (void)addComponent:(id)arg1 toBundleWithId:(int)arg2 includeSubcomponents:(BOOL)arg3 completionHandler:(id)arg4;
- (void)addComponent:(id)arg1 toBundleWithName:(id)arg2 includeSubcomponents:(BOOL)arg3 completionHandler:(id)arg4;
- (void)createComponentBundle:(id)arg1 completionHandler:(id)arg2;
- (void)fetchComponentEventsWithName:(id)arg1 andVersion:(id)arg2 completionHandler:(id)arg3;
- (void)fetchComponentMilestonesWithName:(id)arg1 andVersion:(id)arg2 completionHandler:(id)arg3;
- (void)fetchComponentBuildsWithName:(id)arg1 andVersion:(id)arg2 completionHandler:(id)arg3;
- (void)removeEvent:(id)arg1 fromComponent:(id)arg2 completionHandler:(id)arg3;
- (void)updateEvent:(id)arg1 toComponent:(id)arg2 forEventNamed:(id)arg3 completionHandler:(id)arg4;
- (void)addEvent:(id)arg1 toComponent:(id)arg2 completionHandler:(id)arg3;
- (void)addMilestone:(id)arg1 toComponent:(id)arg2 completionHandler:(id)arg3;
- (void)addBuild:(id)arg1 toComponent:(id)arg2 completionHandler:(id)arg3;
- (void)fetchComponentTreeWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)fetchComponentByName:(id)arg1 andVersion:(id)arg2 requestedFields:(id)arg3 completionHandler:(id)arg4;
- (id)componentsBundleURL;
- (id)componentsURL;
- (void)removeProblemFromWatchListWithId:(id)arg1 completionHandler:(id)arg2;
- (void)addProblemToWatchListWithId:(id)arg1 completionHandler:(id)arg2;
- (void)updateAccessGroup:(id)arg1 workgroupName:(id)arg2 completionHandler:(id)arg3;
- (void)updateWorkGroup:(id)arg1 workgroupName:(id)arg2 completionHandler:(id)arg3;
- (void)createAccessGroup:(id)arg1 completionHandler:(id)arg2;
- (void)createWorkGroup:(id)arg1 completionHandler:(id)arg2;
- (void)findRadarWorkGroupForGroup:(id)arg1 requestedFields:(id)arg2 completionHandler:(id)arg3;
- (void)findRadarGroup:(id)arg1 completionHandler:(id)arg2;
- (void)fetchDetailsOfLoggedInUserWithCompletionHandler:(id)arg1;
- (void)findPeople:(id)arg1 completionHandler:(id)arg2;
- (id)peopleURL;
- (void)removeGroup:(id)arg1 fromProductSecurityReleaseVehicleWithId:(int)arg2 completionHandler:(id)arg3;
- (void)deleteProductSecurityReleaseVehicleWithId:(int)arg1 completionHandler:(id)arg2;
- (void)updateProductSecurityReleaseVehicle:(id)arg1 withReleaseVehicleId:(int)arg2 completionHandler:(id)arg3;
- (void)createProductSecurityReleaseVehicle:(id)arg1 completionHandler:(id)arg2;
- (void)fetchProductSecurityReleaseVehicleWithId:(int)arg1 completionHandler:(id)arg2;
- (void)fetchAllProductSecurityReleaseVehicleWithCompletionHandler:(id)arg1;
- (void)removeGroup:(id)arg1 fromProductSecurityProductWithId:(int)arg2 completionHandler:(id)arg3;
- (void)deleteProductSecurityProductWithId:(int)arg1 completionHandler:(id)arg2;
- (void)updateProductSecurityProduct:(id)arg1 withProductId:(int)arg2 completionHandler:(id)arg3;
- (void)createProductSecurityProduct:(id)arg1 completionHandler:(id)arg2;
- (void)fetchProductSecurityProductWithId:(int)arg1 completionHandler:(id)arg2;
- (void)fetchAllProductSecurityProductsWithCompletionHandler:(id)arg1;
- (void)removeExternalsForProblemId:(int)arg1 havingExternalId:(int)arg2 completionHandler:(id)arg3;
- (void)updateExternal:(id)arg1 havingExternalId:(int)arg2 forProblemId:(int)arg3 completionHandler:(id)arg4;
- (void)addExternal:(id)arg1 forProblemId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchExternalsForProblemId:(int)arg1 completionHandler:(id)arg2;
- (void)removeReporterForProblemId:(int)arg1 havingReporterId:(int)arg2 completionHandler:(id)arg3;
- (void)updateReporter:(id)arg1 forProblemId:(int)arg2 havingReporterId:(int)arg3 completionHandler:(id)arg4;
- (void)addReporter:(id)arg1 forProblemId:(int)arg2 completionHandler:(id)arg3;
- (void)fetchReportersForProblemId:(int)arg1 completionHandler:(id)arg2;
- (void)removeTargetWithRowId:(int)arg1 fromProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)updateTarget:(id)arg1 havingTargetId:(int)arg2 toProblem:(int)arg3 completionHandler:(id)arg4;
- (void)addTarget:(id)arg1 toProblem:(int)arg2 completionHandler:(id)arg3;
- (void)fetchTargetsForProblemId:(int)arg1 completionHandler:(id)arg2;
- (id)_productSecurityReleaseVehicleCreateAndfetchHandlerWithCompletionHandler:(id)arg1;
- (id)_productSecurityProductCreateAndfetchHandlerWithCompletionHandler:(id)arg1;
- (id)productSecurityURL;
- (id)sharedConnectionPool;
- (id)problemsURL;
- (void)setAuthDataSource:(id)arg1;
- (id)uploadProblemAttachmentWithFileURL:(id)arg1 toProblemID:(int)arg2 overridingExisitingFile:(BOOL)arg3 attachmentFilePath:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (id)uploadProblemPictureWithFileURL:(id)arg1 toProblemID:(int)arg2 overridingExisitingPicture:(BOOL)arg3 pictureFilePath:(id)arg4 completionHandler:(id)arg5 progressHandler:(id)arg6;
- (void)addProblemKeywordWithNameOrID:(id)arg1 toProblemWithId:(int)arg2 completionHandler:(id)arg3;
- (void)createProblem:(id)arg1 withRequestedFields:(id)arg2 completionHandler:(id)arg3;
- (void)createProblem:(id)arg1 withRequestedFields:(id)arg2 withFileAttachments:(id)arg3 andImageAttachments:(id)arg4 completionHandler:(id)arg5;
- (BOOL)signInWithAppleConnectToken:(id)arg1 appleConnectName:(id)arg2 withAuthType:(unsigned int)arg3 appEnvironment:(unsigned int)arg4 completionHandler:(id)arg5;
- (void)setLogDelegate:(id)arg1;
- (void)setAuthType:(unsigned int)arg1 userName:(id)arg2 appEnvironment:(unsigned int)arg3 authDataSource:(id)arg4;
- (void)findComponentsWithCriteria:(id)arg1 requestedFields:(id)arg2 resultRowsLimit:(unsigned int)arg3 completionHandler:(id)arg4;
- (id)appleConnectUserName;
- (unsigned int)appEnvironment;
- (unsigned int)authType;
- (id)authDataSource;
- (void)setCurrentRWSAuth:(id)arg1;
- (id)currentRWSAuth;
- (id)groupURL;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (id)sessionConfiguration;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)delegateQueue;
- (id)endpoint;
- (void).cxx_destruct;
- (id)init;
- (void)setSession:(id)arg1;
- (id)session;

@end