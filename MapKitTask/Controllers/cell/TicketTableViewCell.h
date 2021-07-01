//
//  TicketTableViewCell.h
//  MapKitTask
//
//  Created by Alexander Grigoryev on 01.07.2021
//

#import <UIKit/UIKit.h>
#import "DataManager.h"
#import "APIManager.h"
#import "Ticket.h"


NS_ASSUME_NONNULL_BEGIN

@interface TicketTableViewCell : UITableViewCell
@property (nonatomic, strong) Ticket *ticket;
@end

NS_ASSUME_NONNULL_END
