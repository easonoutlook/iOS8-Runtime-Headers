/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, <StockUpdaterDelegate>, NSArray;

@interface StockUpdater : YQLRequest  {
    NSError *_lastError;
    BOOL _isComprehensive;
    <StockUpdaterDelegate> *_delegate;
    NSArray *_requestStocks;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateCompletionHandler;

}

@property <StockUpdaterDelegate> * delegate;
@property(readonly) BOOL isComprehensive;
@property(retain) NSArray * requestStocks;
@property(copy) id updateCompletionHandler;


- (id)aggregateDictionaryDomain;
- (void)didParseData;
- (void)_parseQuoteDictionaries:(id)arg1 withDataSources:(id)arg2;
- (void)_parseExchangeDictionaries:(id)arg1;
- (id)_parseDataSourceMapFromDataSourceDictionaries:(id)arg1;
- (void)setRequestStocks:(id)arg1;
- (BOOL)_updateStocks:(id)arg1 comprehensive:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (void)setUpdateCompletionHandler:(id)arg1;
- (id)updateCompletionHandler;
- (id)requestStocks;
- (BOOL)isComprehensive;
- (BOOL)hadError;
- (void)parseData:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)failWithError:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
