import XCTest
@testable import CEvent

class CEventTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct results.
        XCTAssertEqual(CEvent().text, "Hello, World!")
    }


    static var allTests : [(String, (CEventTests) -> () throws -> Void)] {
        return [
            ("testExample", testExample),
        ]
    }
}
