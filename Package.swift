import PackageDescription

let package = Package(
    name: "CEvent",
    providers: [
        .Brew("libevent"), 
        .Apt("libevent-dev")
    ],
    pkgConfig: "libevent"
)

