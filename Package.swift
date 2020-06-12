// swift-tools-version:5.0
import PackageDescription

let package = Package(
	name: "FSCalendar",
	products: [
		.library(name: "FSCalendar", targets: ["FSCalendar"]),
	],
	targets: [
		.target(name: "FSCalendar"),
		.testTarget(name: "FSCalendarTests", dependencies: [.target(name: "FSCalendar")])
	]
)
